// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACERESPONSE_P_H
#define QTAWS_FINSPACERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Finspace {

class FinspaceResponse;

class FinspaceResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit FinspaceResponsePrivate(FinspaceResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FinspaceResponse)
    Q_DISABLE_COPY(FinspaceResponsePrivate)

};

} // namespace Finspace
} // namespace QtAws

#endif
