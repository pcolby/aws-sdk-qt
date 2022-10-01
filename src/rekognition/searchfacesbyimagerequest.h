// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESBYIMAGEREQUEST_H
#define QTAWS_SEARCHFACESBYIMAGEREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesByImageRequestPrivate;

class QTAWSREKOGNITION_EXPORT SearchFacesByImageRequest : public RekognitionRequest {

public:
    SearchFacesByImageRequest(const SearchFacesByImageRequest &other);
    SearchFacesByImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFacesByImageRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
