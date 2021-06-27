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

#ifndef QTAWS_LEXRUNTIMEV2REQUEST_H
#define QTAWS_LEXRUNTIMEV2REQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LexRuntimeV2 {

class LexRuntimeV2RequestPrivate;

class QTAWS_EXPORT LexRuntimeV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LexRuntimeV2.
    enum Action {
        DeleteSessionAction,
        GetSessionAction,
        PutSessionAction,
        RecognizeTextAction,
        RecognizeUtteranceAction,
        StartConversationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LexRuntimeV2Request(const Action action);
    LexRuntimeV2Request(const LexRuntimeV2Request &other);
    LexRuntimeV2Request &operator=(const LexRuntimeV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LexRuntimeV2Request &other) const;


protected:
    /// @cond internal
    LexRuntimeV2RequestPrivate * const d_ptr; ///< Internal d-pointer.
    LexRuntimeV2Request(LexRuntimeV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexRuntimeV2Request)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
