// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVAULTSRESPONSE_P_H
#define QTAWS_LISTVAULTSRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class ListVaultsResponse;

class ListVaultsResponsePrivate : public GlacierResponsePrivate {

public:

    explicit ListVaultsResponsePrivate(ListVaultsResponse * const q);

    void parseListVaultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVaultsResponse)
    Q_DISABLE_COPY(ListVaultsResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
