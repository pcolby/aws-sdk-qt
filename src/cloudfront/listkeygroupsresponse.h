// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYGROUPSRESPONSE_H
#define QTAWS_LISTKEYGROUPSRESPONSE_H

#include "cloudfrontresponse.h"
#include "listkeygroupsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListKeyGroupsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListKeyGroupsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListKeyGroupsResponse(const ListKeyGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKeyGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyGroupsResponse)
    Q_DISABLE_COPY(ListKeyGroupsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
