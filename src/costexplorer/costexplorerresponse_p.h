// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTEXPLORERRESPONSE_P_H
#define QTAWS_COSTEXPLORERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class CostExplorerResponse;

class CostExplorerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CostExplorerResponsePrivate(CostExplorerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CostExplorerResponse)
    Q_DISABLE_COPY(CostExplorerResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
