// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIVITYRESPONSE_H
#define QTAWS_DELETEACTIVITYRESPONSE_H

#include "sfnresponse.h"
#include "deleteactivityrequest.h"

namespace QtAws {
namespace Sfn {

class DeleteActivityResponsePrivate;

class QTAWSSFN_EXPORT DeleteActivityResponse : public SfnResponse {
    Q_OBJECT

public:
    DeleteActivityResponse(const DeleteActivityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteActivityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteActivityResponse)
    Q_DISABLE_COPY(DeleteActivityResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
