// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKDEFINITIONSRESPONSE_H
#define QTAWS_LISTTASKDEFINITIONSRESPONSE_H

#include "ecsresponse.h"
#include "listtaskdefinitionsrequest.h"

namespace QtAws {
namespace Ecs {

class ListTaskDefinitionsResponsePrivate;

class QTAWSECS_EXPORT ListTaskDefinitionsResponse : public EcsResponse {
    Q_OBJECT

public:
    ListTaskDefinitionsResponse(const ListTaskDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTaskDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTaskDefinitionsResponse)
    Q_DISABLE_COPY(ListTaskDefinitionsResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
