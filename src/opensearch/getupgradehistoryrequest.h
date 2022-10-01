// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADEHISTORYREQUEST_H
#define QTAWS_GETUPGRADEHISTORYREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetUpgradeHistoryRequestPrivate;

class QTAWSOPENSEARCH_EXPORT GetUpgradeHistoryRequest : public OpenSearchRequest {

public:
    GetUpgradeHistoryRequest(const GetUpgradeHistoryRequest &other);
    GetUpgradeHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUpgradeHistoryRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
