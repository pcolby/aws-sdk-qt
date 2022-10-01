// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACERESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACERESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DescribeWorkspaceResponse;

class DescribeWorkspaceResponsePrivate : public AmpResponsePrivate {

public:

    explicit DescribeWorkspaceResponsePrivate(DescribeWorkspaceResponse * const q);

    void parseDescribeWorkspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceResponse)
    Q_DISABLE_COPY(DescribeWorkspaceResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
