// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBRANCHRESPONSE_H
#define QTAWS_DELETEBRANCHRESPONSE_H

#include "amplifyresponse.h"
#include "deletebranchrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteBranchResponsePrivate;

class QTAWSAMPLIFY_EXPORT DeleteBranchResponse : public AmplifyResponse {
    Q_OBJECT

public:
    DeleteBranchResponse(const DeleteBranchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBranchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBranchResponse)
    Q_DISABLE_COPY(DeleteBranchResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
