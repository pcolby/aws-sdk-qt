// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPACKAGEVERSIONHISTORYRESPONSE_H
#define QTAWS_GETPACKAGEVERSIONHISTORYRESPONSE_H

#include "opensearchresponse.h"
#include "getpackageversionhistoryrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetPackageVersionHistoryResponsePrivate;

class QTAWSOPENSEARCH_EXPORT GetPackageVersionHistoryResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    GetPackageVersionHistoryResponse(const GetPackageVersionHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPackageVersionHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPackageVersionHistoryResponse)
    Q_DISABLE_COPY(GetPackageVersionHistoryResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
