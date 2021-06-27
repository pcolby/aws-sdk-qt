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

#ifndef QTAWS_SIGNERREQUEST_P_H
#define QTAWS_SIGNERREQUEST_P_H

namespace QtAws {
namespace signer {

class signerRequest;

class signerRequestPrivate {

public:
    signerRequest::Action action; ///< signer action to be performed.
    QString apiVersion;        ///< signer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< signer request (query string) parameters. @todo?

    signerRequestPrivate(const signerRequest::Action action, signerRequest * const q);
    signerRequestPrivate(const signerRequestPrivate &other, signerRequest * const q);

    static QString toString(const signerRequest::Action &action);

protected:
    signerRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(signerRequest)

};

} // namespace signer
} // namespace QtAws

#endif
