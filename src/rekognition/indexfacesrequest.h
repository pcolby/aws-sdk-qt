// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXFACESREQUEST_H
#define QTAWS_INDEXFACESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class IndexFacesRequestPrivate;

class QTAWSREKOGNITION_EXPORT IndexFacesRequest : public RekognitionRequest {

public:
    IndexFacesRequest(const IndexFacesRequest &other);
    IndexFacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IndexFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
