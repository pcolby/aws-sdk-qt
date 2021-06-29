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

#ifndef QTAWS_CODESTARREQUEST_H
#define QTAWS_CODESTARREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodestarglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeStar {

class CodeStarRequestPrivate;

class QTAWSCODESTAR_EXPORT CodeStarRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeStar.
    enum Action {
        AssociateTeamMemberAction,
        CreateProjectAction,
        CreateUserProfileAction,
        DeleteProjectAction,
        DeleteUserProfileAction,
        DescribeProjectAction,
        DescribeUserProfileAction,
        DisassociateTeamMemberAction,
        ListProjectsAction,
        ListResourcesAction,
        ListTagsForProjectAction,
        ListTeamMembersAction,
        ListUserProfilesAction,
        TagProjectAction,
        UntagProjectAction,
        UpdateProjectAction,
        UpdateTeamMemberAction,
        UpdateUserProfileAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeStarRequest(const Action action);
    CodeStarRequest(const CodeStarRequest &other);
    CodeStarRequest &operator=(const CodeStarRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeStarRequest &other) const;


protected:
    /// @cond internal
    CodeStarRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit CodeStarRequest(CodeStarRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeStarRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
