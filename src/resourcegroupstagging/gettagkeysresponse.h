// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGKEYSRESPONSE_H
#define QTAWS_GETTAGKEYSRESPONSE_H

#include "resourcegroupstaggingresponse.h"
#include "gettagkeysrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagKeysResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT GetTagKeysResponse : public ResourceGroupsTaggingResponse {
    Q_OBJECT

public:
    GetTagKeysResponse(const GetTagKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTagKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTagKeysResponse)
    Q_DISABLE_COPY(GetTagKeysResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
