// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSVERSIONRESPONSE_H
#define QTAWS_CREATELENSVERSIONRESPONSE_H

#include "wellarchitectedresponse.h"
#include "createlensversionrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensVersionResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateLensVersionResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    CreateLensVersionResponse(const CreateLensVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLensVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLensVersionResponse)
    Q_DISABLE_COPY(CreateLensVersionResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
