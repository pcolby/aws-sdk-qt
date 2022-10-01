// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMBRANCHESRESPONSE_H
#define QTAWS_LISTPLATFORMBRANCHESRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "listplatformbranchesrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformBranchesResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT ListPlatformBranchesResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    ListPlatformBranchesResponse(const ListPlatformBranchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPlatformBranchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPlatformBranchesResponse)
    Q_DISABLE_COPY(ListPlatformBranchesResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
