// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMPROCESSORSREQUEST_H
#define QTAWS_LISTSTREAMPROCESSORSREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class ListStreamProcessorsRequestPrivate;

class QTAWSREKOGNITION_EXPORT ListStreamProcessorsRequest : public RekognitionRequest {

public:
    ListStreamProcessorsRequest(const ListStreamProcessorsRequest &other);
    ListStreamProcessorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamProcessorsRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
