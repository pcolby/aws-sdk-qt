// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTDESCRIPTIONRESPONSE_H
#define QTAWS_UPDATEPULLREQUESTDESCRIPTIONRESPONSE_H

#include "codecommitresponse.h"
#include "updatepullrequestdescriptionrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestDescriptionResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestDescriptionResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdatePullRequestDescriptionResponse(const UpdatePullRequestDescriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePullRequestDescriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestDescriptionResponse)
    Q_DISABLE_COPY(UpdatePullRequestDescriptionResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
