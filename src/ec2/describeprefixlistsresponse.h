// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREFIXLISTSRESPONSE_H
#define QTAWS_DESCRIBEPREFIXLISTSRESPONSE_H

#include "ec2response.h"
#include "describeprefixlistsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePrefixListsResponsePrivate;

class QTAWSEC2_EXPORT DescribePrefixListsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribePrefixListsResponse(const DescribePrefixListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePrefixListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePrefixListsResponse)
    Q_DISABLE_COPY(DescribePrefixListsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
