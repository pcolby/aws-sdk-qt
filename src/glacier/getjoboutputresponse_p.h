// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBOUTPUTRESPONSE_P_H
#define QTAWS_GETJOBOUTPUTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class GetJobOutputResponse;

class GetJobOutputResponsePrivate : public GlacierResponsePrivate {

public:

    explicit GetJobOutputResponsePrivate(GetJobOutputResponse * const q);

    void parseGetJobOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobOutputResponse)
    Q_DISABLE_COPY(GetJobOutputResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
