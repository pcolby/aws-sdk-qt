// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTLISTRESPONSE_H
#define QTAWS_UPDATECONTACTLISTRESPONSE_H

#include "sesv2response.h"
#include "updatecontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateContactListResponsePrivate;

class QTAWSSESV2_EXPORT UpdateContactListResponse : public SESv2Response {
    Q_OBJECT

public:
    UpdateContactListResponse(const UpdateContactListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactListResponse)
    Q_DISABLE_COPY(UpdateContactListResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
