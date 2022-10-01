// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDATAREPOSITORYASSOCIATIONSRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryAssociationsResponse;

class DescribeDataRepositoryAssociationsResponsePrivate : public FSxResponsePrivate {

public:

    explicit DescribeDataRepositoryAssociationsResponsePrivate(DescribeDataRepositoryAssociationsResponse * const q);

    void parseDescribeDataRepositoryAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataRepositoryAssociationsResponse)
    Q_DISABLE_COPY(DescribeDataRepositoryAssociationsResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
