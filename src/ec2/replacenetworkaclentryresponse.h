// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACENETWORKACLENTRYRESPONSE_H
#define QTAWS_REPLACENETWORKACLENTRYRESPONSE_H

#include "ec2response.h"
#include "replacenetworkaclentryrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceNetworkAclEntryResponsePrivate;

class QTAWSEC2_EXPORT ReplaceNetworkAclEntryResponse : public Ec2Response {
    Q_OBJECT

public:
    ReplaceNetworkAclEntryResponse(const ReplaceNetworkAclEntryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplaceNetworkAclEntryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceNetworkAclEntryResponse)
    Q_DISABLE_COPY(ReplaceNetworkAclEntryResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
