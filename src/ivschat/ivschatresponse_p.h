// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IVSCHATRESPONSE_P_H
#define QTAWS_IVSCHATRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IvsChat {

class IvsChatResponse;

class IvsChatResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IvsChatResponsePrivate(IvsChatResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IvsChatResponse)
    Q_DISABLE_COPY(IvsChatResponsePrivate)

};

} // namespace IvsChat
} // namespace QtAws

#endif
