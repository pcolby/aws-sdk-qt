// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSERRESPONSE_H
#define QTAWS_MODIFYUSERRESPONSE_H

#include "elasticacheresponse.h"
#include "modifyuserrequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyUserResponsePrivate;

class QTAWSELASTICACHE_EXPORT ModifyUserResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    ModifyUserResponse(const ModifyUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyUserResponse)
    Q_DISABLE_COPY(ModifyUserResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
