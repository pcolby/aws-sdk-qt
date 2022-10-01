// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTASSOCIATIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListAssociationsResponse;

class ListAssociationsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListAssociationsResponsePrivate(ListAssociationsResponse * const q);

    void parseListAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociationsResponse)
    Q_DISABLE_COPY(ListAssociationsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
