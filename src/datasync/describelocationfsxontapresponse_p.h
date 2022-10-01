// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXONTAPRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONFSXONTAPRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxOntapResponse;

class DescribeLocationFsxOntapResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationFsxOntapResponsePrivate(DescribeLocationFsxOntapResponse * const q);

    void parseDescribeLocationFsxOntapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxOntapResponse)
    Q_DISABLE_COPY(DescribeLocationFsxOntapResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
