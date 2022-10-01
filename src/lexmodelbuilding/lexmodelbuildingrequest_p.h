// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELBUILDINGREQUEST_P_H
#define QTAWS_LEXMODELBUILDINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class LexModelBuildingRequest;

class LexModelBuildingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LexModelBuildingRequest::Action action; ///< LexModelBuilding action to be performed.
    QString apiVersion;        ///< LexModelBuilding API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LexModelBuilding request (query string) parameters. @todo?

    LexModelBuildingRequestPrivate(const LexModelBuildingRequest::Action action, LexModelBuildingRequest * const q);
    LexModelBuildingRequestPrivate(const LexModelBuildingRequestPrivate &other, LexModelBuildingRequest * const q);

    static QString toString(const LexModelBuildingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LexModelBuildingRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
