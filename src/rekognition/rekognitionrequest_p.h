// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REKOGNITIONREQUEST_P_H
#define QTAWS_REKOGNITIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class RekognitionRequest;

class RekognitionRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RekognitionRequest::Action action; ///< Rekognition action to be performed.
    QString apiVersion;        ///< Rekognition API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Rekognition request (query string) parameters. @todo?

    RekognitionRequestPrivate(const RekognitionRequest::Action action, RekognitionRequest * const q);
    RekognitionRequestPrivate(const RekognitionRequestPrivate &other, RekognitionRequest * const q);

    static QString toString(const RekognitionRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RekognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
