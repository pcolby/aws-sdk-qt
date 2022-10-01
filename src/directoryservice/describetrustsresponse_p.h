// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUSTSRESPONSE_P_H
#define QTAWS_DESCRIBETRUSTSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeTrustsResponse;

class DescribeTrustsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeTrustsResponsePrivate(DescribeTrustsResponse * const q);

    void parseDescribeTrustsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrustsResponse)
    Q_DISABLE_COPY(DescribeTrustsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
