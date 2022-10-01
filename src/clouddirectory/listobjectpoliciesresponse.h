// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTPOLICIESRESPONSE_H
#define QTAWS_LISTOBJECTPOLICIESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listobjectpoliciesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListObjectPoliciesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListObjectPoliciesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListObjectPoliciesResponse(const ListObjectPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectPoliciesResponse)
    Q_DISABLE_COPY(ListObjectPoliciesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
