// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDPREFIXLISTSRESPONSE_H
#define QTAWS_DESCRIBEMANAGEDPREFIXLISTSRESPONSE_H

#include "ec2response.h"
#include "describemanagedprefixlistsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeManagedPrefixListsResponsePrivate;

class QTAWSEC2_EXPORT DescribeManagedPrefixListsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeManagedPrefixListsResponse(const DescribeManagedPrefixListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeManagedPrefixListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeManagedPrefixListsResponse)
    Q_DISABLE_COPY(DescribeManagedPrefixListsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
