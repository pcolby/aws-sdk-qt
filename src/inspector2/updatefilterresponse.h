// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILTERRESPONSE_H
#define QTAWS_UPDATEFILTERRESPONSE_H

#include "inspector2response.h"
#include "updatefilterrequest.h"

namespace QtAws {
namespace Inspector2 {

class UpdateFilterResponsePrivate;

class QTAWSINSPECTOR2_EXPORT UpdateFilterResponse : public Inspector2Response {
    Q_OBJECT

public:
    UpdateFilterResponse(const UpdateFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFilterResponse)
    Q_DISABLE_COPY(UpdateFilterResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
