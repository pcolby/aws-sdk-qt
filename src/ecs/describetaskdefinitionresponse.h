// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKDEFINITIONRESPONSE_H
#define QTAWS_DESCRIBETASKDEFINITIONRESPONSE_H

#include "ecsresponse.h"
#include "describetaskdefinitionrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeTaskDefinitionResponsePrivate;

class QTAWSECS_EXPORT DescribeTaskDefinitionResponse : public EcsResponse {
    Q_OBJECT

public:
    DescribeTaskDefinitionResponse(const DescribeTaskDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTaskDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTaskDefinitionResponse)
    Q_DISABLE_COPY(DescribeTaskDefinitionResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
