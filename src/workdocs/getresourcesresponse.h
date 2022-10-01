// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESRESPONSE_H
#define QTAWS_GETRESOURCESRESPONSE_H

#include "workdocsresponse.h"
#include "getresourcesrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetResourcesResponsePrivate;

class QTAWSWORKDOCS_EXPORT GetResourcesResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    GetResourcesResponse(const GetResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcesResponse)
    Q_DISABLE_COPY(GetResourcesResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
