// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEALIASRESPONSE_P_H
#define QTAWS_DESCRIBETEMPLATEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateAliasResponse;

class DescribeTemplateAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeTemplateAliasResponsePrivate(DescribeTemplateAliasResponse * const q);

    void parseDescribeTemplateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTemplateAliasResponse)
    Q_DISABLE_COPY(DescribeTemplateAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
