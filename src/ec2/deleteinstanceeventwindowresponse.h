// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEEVENTWINDOWRESPONSE_H
#define QTAWS_DELETEINSTANCEEVENTWINDOWRESPONSE_H

#include "ec2response.h"
#include "deleteinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteInstanceEventWindowResponsePrivate;

class QTAWSEC2_EXPORT DeleteInstanceEventWindowResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteInstanceEventWindowResponse(const DeleteInstanceEventWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInstanceEventWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceEventWindowResponse)
    Q_DISABLE_COPY(DeleteInstanceEventWindowResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
