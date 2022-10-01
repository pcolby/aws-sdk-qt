// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGVALUESRESPONSE_H
#define QTAWS_GETTAGVALUESRESPONSE_H

#include "resourcegroupstaggingresponse.h"
#include "gettagvaluesrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagValuesResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT GetTagValuesResponse : public ResourceGroupsTaggingResponse {
    Q_OBJECT

public:
    GetTagValuesResponse(const GetTagValuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTagValuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTagValuesResponse)
    Q_DISABLE_COPY(GetTagValuesResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
