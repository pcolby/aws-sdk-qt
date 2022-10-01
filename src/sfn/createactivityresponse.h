// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVITYRESPONSE_H
#define QTAWS_CREATEACTIVITYRESPONSE_H

#include "sfnresponse.h"
#include "createactivityrequest.h"

namespace QtAws {
namespace Sfn {

class CreateActivityResponsePrivate;

class QTAWSSFN_EXPORT CreateActivityResponse : public SfnResponse {
    Q_OBJECT

public:
    CreateActivityResponse(const CreateActivityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateActivityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateActivityResponse)
    Q_DISABLE_COPY(CreateActivityResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
