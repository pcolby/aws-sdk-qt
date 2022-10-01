// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEMORYDBRESPONSE_P_H
#define QTAWS_MEMORYDBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class MemoryDbResponse;

class MemoryDbResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MemoryDbResponsePrivate(MemoryDbResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MemoryDbResponse)
    Q_DISABLE_COPY(MemoryDbResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
