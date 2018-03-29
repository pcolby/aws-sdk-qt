/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MACHINELEARNINGREQUEST_P_H
#define QTAWS_MACHINELEARNINGREQUEST_P_H

#include "machinelearning_p.h"
#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class MachineLearningRequest;

class QTAWS_EXPORT MachineLearningRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MachineLearningRequest::Action action; ///< MachineLearning action to be performed.
    QString apiVersion;        ///< MachineLearning API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MachineLearning request (query string) parameters. @todo?

    MachineLearningRequestPrivate(const MachineLearningRequest::Action action, MachineLearningRequest * const q);
    MachineLearningRequestPrivate(const MachineLearningRequestPrivate &other, MachineLearningRequest * const q);

    static QString toString(const MachineLearningRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MachineLearningRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
