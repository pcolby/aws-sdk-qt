// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTIONSREQUEST_P_H
#define QTAWS_LISTCOLLECTIONSREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "listcollectionsrequest.h"

namespace QtAws {
namespace Rekognition {

class ListCollectionsRequest;

class ListCollectionsRequestPrivate : public RekognitionRequestPrivate {

public:
    ListCollectionsRequestPrivate(const RekognitionRequest::Action action,
                                   ListCollectionsRequest * const q);
    ListCollectionsRequestPrivate(const ListCollectionsRequestPrivate &other,
                                   ListCollectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCollectionsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
