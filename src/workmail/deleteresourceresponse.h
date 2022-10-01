// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCERESPONSE_H
#define QTAWS_DELETERESOURCERESPONSE_H

#include "workmailresponse.h"
#include "deleteresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteResourceResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteResourceResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteResourceResponse(const DeleteResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceResponse)
    Q_DISABLE_COPY(DeleteResourceResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
