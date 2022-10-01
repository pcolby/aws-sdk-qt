// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIVESOURCERESPONSE_H
#define QTAWS_CREATELIVESOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "createlivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateLiveSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT CreateLiveSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    CreateLiveSourceResponse(const CreateLiveSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLiveSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLiveSourceResponse)
    Q_DISABLE_COPY(CreateLiveSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
