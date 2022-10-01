// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLACIERRESPONSE_P_H
#define QTAWS_GLACIERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Glacier {

class GlacierResponse;

class GlacierResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GlacierResponsePrivate(GlacierResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GlacierResponse)
    Q_DISABLE_COPY(GlacierResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
