// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTESRESPONSE_H
#define QTAWS_LISTATTRIBUTESRESPONSE_H

#include "ecsresponse.h"
#include "listattributesrequest.h"

namespace QtAws {
namespace Ecs {

class ListAttributesResponsePrivate;

class QTAWSECS_EXPORT ListAttributesResponse : public EcsResponse {
    Q_OBJECT

public:
    ListAttributesResponse(const ListAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttributesResponse)
    Q_DISABLE_COPY(ListAttributesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
