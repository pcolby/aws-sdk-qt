// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTLISTRESPONSE_H
#define QTAWS_DELETECONTACTLISTRESPONSE_H

#include "sesv2response.h"
#include "deletecontactlistrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteContactListResponsePrivate;

class QTAWSSESV2_EXPORT DeleteContactListResponse : public SESv2Response {
    Q_OBJECT

public:
    DeleteContactListResponse(const DeleteContactListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContactListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactListResponse)
    Q_DISABLE_COPY(DeleteContactListResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
