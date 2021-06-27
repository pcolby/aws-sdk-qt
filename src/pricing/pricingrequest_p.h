/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PRICINGREQUEST_P_H
#define QTAWS_PRICINGREQUEST_P_H

namespace QtAws {
namespace Pricing {

class PricingRequest;

class PricingRequestPrivate {

public:
    PricingRequest::Action action; ///< Pricing action to be performed.
    QString apiVersion;        ///< Pricing API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Pricing request (query string) parameters. @todo?

    PricingRequestPrivate(const PricingRequest::Action action, PricingRequest * const q);
    PricingRequestPrivate(const PricingRequestPrivate &other, PricingRequest * const q);

    static QString toString(const PricingRequest::Action &action);

protected:
    PricingRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(PricingRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
