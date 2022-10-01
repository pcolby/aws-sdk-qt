// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTATTRIBUTESRESPONSE_H
#define QTAWS_PUTATTRIBUTESRESPONSE_H

#include "ecsresponse.h"
#include "putattributesrequest.h"

namespace QtAws {
namespace Ecs {

class PutAttributesResponsePrivate;

class QTAWSECS_EXPORT PutAttributesResponse : public EcsResponse {
    Q_OBJECT

public:
    PutAttributesResponse(const PutAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAttributesResponse)
    Q_DISABLE_COPY(PutAttributesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
