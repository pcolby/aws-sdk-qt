// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKDEFINITIONFAMILIESRESPONSE_H
#define QTAWS_LISTTASKDEFINITIONFAMILIESRESPONSE_H

#include "ecsresponse.h"
#include "listtaskdefinitionfamiliesrequest.h"

namespace QtAws {
namespace Ecs {

class ListTaskDefinitionFamiliesResponsePrivate;

class QTAWSECS_EXPORT ListTaskDefinitionFamiliesResponse : public EcsResponse {
    Q_OBJECT

public:
    ListTaskDefinitionFamiliesResponse(const ListTaskDefinitionFamiliesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTaskDefinitionFamiliesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTaskDefinitionFamiliesResponse)
    Q_DISABLE_COPY(ListTaskDefinitionFamiliesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
