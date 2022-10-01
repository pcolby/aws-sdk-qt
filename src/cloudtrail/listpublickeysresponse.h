// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLICKEYSRESPONSE_H
#define QTAWS_LISTPUBLICKEYSRESPONSE_H

#include "cloudtrailresponse.h"
#include "listpublickeysrequest.h"

namespace QtAws {
namespace CloudTrail {

class ListPublicKeysResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT ListPublicKeysResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    ListPublicKeysResponse(const ListPublicKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPublicKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPublicKeysResponse)
    Q_DISABLE_COPY(ListPublicKeysResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
