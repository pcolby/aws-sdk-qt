// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLESOLUTIONSTACKSRESPONSE_H
#define QTAWS_LISTAVAILABLESOLUTIONSTACKSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "listavailablesolutionstacksrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListAvailableSolutionStacksResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT ListAvailableSolutionStacksResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    ListAvailableSolutionStacksResponse(const ListAvailableSolutionStacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailableSolutionStacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableSolutionStacksResponse)
    Q_DISABLE_COPY(ListAvailableSolutionStacksResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
