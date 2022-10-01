// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYATTACHMENTSRESPONSE_H
#define QTAWS_LISTPOLICYATTACHMENTSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listpolicyattachmentsrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListPolicyAttachmentsResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListPolicyAttachmentsResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListPolicyAttachmentsResponse(const ListPolicyAttachmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPolicyAttachmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyAttachmentsResponse)
    Q_DISABLE_COPY(ListPolicyAttachmentsResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
