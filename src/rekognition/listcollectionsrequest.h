// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTIONSREQUEST_H
#define QTAWS_LISTCOLLECTIONSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class ListCollectionsRequestPrivate;

class QTAWSREKOGNITION_EXPORT ListCollectionsRequest : public RekognitionRequest {

public:
    ListCollectionsRequest(const ListCollectionsRequest &other);
    ListCollectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCollectionsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
